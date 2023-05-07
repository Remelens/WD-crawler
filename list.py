#    ||======\\     =====
#    ||       ||  //
#    ||       //  ||
#    ||======//   \\
#    ||  \\    //   =====
#    ||   \\  //  ____  ____
#    ||    \\//   |  |  |  |
#    ==     //    |---  |---
#          ===    |     |
#
#            list.py
#
# Copyright (c) 2022-2023 HelloOSMe
#      All rights reserved.

import requests
import json
import string
import random
import sys
import os

token = ''.join(
    random.choice(string.ascii_lowercase + string.digits) for x in range(6)
)
cookies = requests.cookies.RequestsCookieJar()
cookies.set('wikidot_token7', token, domain='truthboard.wikidot.com', path='/')
p = requests.post('https://truthboard.wikidot.com/ajax-module-connector.php', data={
    'wikidot_token7': token, 
    'moduleName': 'viewsource/ViewSourceModule', 
    'page_id':sys.argv[1],
    'raw':'true'}, 
    cookies=cookies)
response = json.loads(p.text)
body = response['body']
print(sys.argv[2])
with open('./source/'+sys.argv[2],mode='w',encoding='utf-8') as f:
    f.write('<!DOCTYPE html>\n<html>\n<head>\n</head>\n<body>\n<code><pre style="font-family: Menlo, Monaco, Consolas, \\"Courier New\\", monospace;font-size:18px;">')
    f.write(body)
    f.write('\n</pre>\n</code>\n</body></html>')