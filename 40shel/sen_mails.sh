#!/bin/bash
recipient=”madz.moody@gmail.com”
subject=”Greetings”
message=”Welcome to UbuntuPit”
`mail -s $subject $recipient <<< $message`
