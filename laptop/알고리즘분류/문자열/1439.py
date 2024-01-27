# Reverse

import re;a=input();print([0,min(len(re.findall("0+",a)),len(re.findall("1+",a)))][len(set(a))>1])