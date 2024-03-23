import pandas as pd
import numpy as np
data=np.arange(0,25).reshape(5,5)
index='A B C D E'.split()
columns='Col1 Col2 Col3 Col4 Col5'.split()
pd.DataFrame(data=data,index=index,columns=columns)