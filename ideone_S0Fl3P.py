#Kolmogorov-Smirnov Test	[uniformity (frequency) Test]
#Example: Suppose 10 generated numbers: R(i) are 0.24,0.89,0.11,0.61,0.23,0.86,0.41,0.64,0.50,0.65 
# H_alpha : uniform  , H0 : not uniform 
import numpy as np
random_numbers = [0.24,0.89,0.11,0.61,0.23,0.86,0.41,0.64,0.50,0.65]
random_numbers.sort()                      # first step is to arrange from smallest to greatest 
print("sorted random numbers = " + str(random_numbers))
Fx= random_numbers
print("F(x) = " + str(Fx))                 #second step is to apply function in random numbers  F(x)
SNx=[]
i = 0.1
while i <= 1:
  SNx.append(i) 
  i += 0.1
  i = round(i , 1) 
print("SN(x) =" + str(SNx))                    # third step is to find SN(x) 
# Subtract two lists with numpy
array1 = np.array(Fx)
array2 = np.array(SNx)
subtracted_array = np.subtract(array1, array2) # fourth step is to find |SN(x) - F(x)|
SNx_Fx = list(subtracted_array)
snx_Fx = list()
for value in SNx_Fx:
    absolute = abs(value)
    snx_Fx.append(absolute)
    snx_Fx.round(value , 2) 
    
print("|SN(x) - F(x)| = " + str(snx_Fx))  
maxValue = max(snx_Fx)
print("maxValue ="+str(maxValue))
D_alpha=0.565  # with alpha=0.95
if maxValue > D_alpha:
  print("Decision : reject H0 because maxValue > D_alpha ")
else:
  print("Decision : don't reject H0 because maxValue < D_alpha ")