#!/usr/bin/env python
# coding: utf-8

# In[16]:


import datetime
now = datetime.datetime.now()
hour = now.hour

if hour < 10:
    print("Good morning World!")
elif hour < 17:
    print("Hello World!")
else:
    print("Good evening World")
    


# In[ ]:




