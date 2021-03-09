 #!/usr/bin/env bash

 # Execute this file to install the sato cli tools into your path on OS X

 CURRENT_LOC="$( cd "$(dirname "$0")" ; pwd -P )"
 LOCATION=${CURRENT_LOC%Sato-Qt.app*}

 # Ensure that the directory to symlink to exists
 sudo mkdir -p /usr/local/bin

 # Create symlinks to the cli tools
 sudo ln -s ${LOCATION}/Sato-Qt.app/Contents/MacOS/satod /usr/local/bin/satod
 sudo ln -s ${LOCATION}/Sato-Qt.app/Contents/MacOS/sato-cli /usr/local/bin/sato-cli
