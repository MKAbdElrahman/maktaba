#!/usr/bin/env python3

import argparse
import os
import subprocess

BUILD_DIR = 'build'
APP_DIR = 'app'
APP_EXECUTABLE = 'my_app'
TEST_TEMP_DIR = os.path.join(BUILD_DIR, 'test')

def parse_arguments():
    parser = argparse.ArgumentParser(description='Build, test, and run the application.')
    parser.add_argument('-b', '--build', action='store_true', help='Build the application.')
    parser.add_argument('-t', '--test', action='store_true', help='Run the tests.')
    parser.add_argument('-r', '--run', action='store_true', help='Run the application.')
    return parser.parse_args()

def main():
    args = parse_arguments()

    # If neither build nor test option is specified, default to building only
    if not args.build and not args.test and not args.run:
        args.build = True

    # Create the build directory if it doesn't exist
    if not os.path.isdir(BUILD_DIR):
        os.mkdir(BUILD_DIR)

    # Navigate to the build directory and run CMake to generate the build files
    os.chdir(BUILD_DIR)
    subprocess.run(['cmake', '..'], check=True)

    # Build the project if build option is specified
    #if args.build:
    subprocess.run(['make'], check=True)

    # Navigate to the test temporary directory and run CTest to run the tests if test option is specified
    if args.test:
        # Create the test temporary directory if it doesn't exist
        subprocess.run(['ctest', '-V'], check=True)

    # Run the executable if run option is specified
    if args.run:
        os.chdir(APP_DIR)
        subprocess.run(['./{}'.format(APP_EXECUTABLE)], check=True)

if __name__ == '__main__':
    main()
