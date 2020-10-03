#!/bin/bash
# Purpose: Send a provided message to stdout, with a default
# Use: ./hello-hacktoberfest.sh

# Set the message, using bash parameter substitution to set a default
MSG=${1:-'Hello Hacktoberfest!'}

echo "$MSG"
