#!/usr/bin/env python
"""Plot WAAS coverage

This command line program counts commas on each line of a file and
prints out the number with the rest of the line. This should make it 
easier to check if I have my function calls right in my keyboard
firmware files.

Usage:
  check_commas.py <in_file>
  check_commas.py (-h | --help)

Arguments:
  <in_file>                  the file to check

Options:
  -h --help                   show this help message and exit

"""
from waas.docopt import docopt

def command_line(args):
    with open(args['<in_file>']) as input_file:
        for line in input_file:
            split_line = line.split(',')
            num_commas = len(split_line) - 1
            print('%2d | %s' % (num_commas, line.rstrip()))

if __name__ == '__main__':
    ARGS = docopt(__doc__, version='prninfo 1.0')
    command_line(ARGS)
