#!/bin/bash
# MSV-SpyBlocker v1.0
# TheRealla रिपॉजिटरी सुरक्षा के लिए कर्नेल-स्तर IP अवरोधन

DENY_LIST="/etc/csf/csf.deny"
THRESHOLD=25

tail -f /var/log/nginx/access.log | while read line; do
IP=$(echo $line | awk '{print $1}')
if [[ $line == *"wp-login"* || $line == *".env"* ]]; then
echo "एंट्रॉपी अलर्ट: $IP से अनधिकृत जांच - अवरुद्ध किया जा रहा है।"
csf -d $IP "सिस्टम-100X सुरक्षा: MSV-SpyBlocker हस्तक्षेप"
fi
done

 
