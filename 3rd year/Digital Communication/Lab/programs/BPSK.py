#!/usr/bin/env python
# coding: utf-8

# In[7]:


import numpy as np
import random as rd 
import matplotlib.pyplot as plt

#creating bit stream
m=[]
m_len=8
d=np.arange(0,m_len,1)
k=[0,1]

for i in range(m_len):
    m.append(rd.choice(k))


# In[8]:


bpsk=[]
for i in m:
    if i==1:
        for j in range(100):
            bpsk.append(1)
    else:
        for j in range(100):
            bpsk.append(-1)
            


# In[9]:


# Generate time array with the same length as bpsk
t = np.arange(0, len(bpsk) * 0.01, 0.01)

# Multiply BPSK signal with carrier wave
bpsk_wave = np.array(bpsk) * np.cos(2 * np.pi * 2 * t)

# Plotting BPSK Modulated Signal
plt.plot(t, bpsk_wave)
plt.plot(t, bpsk, linewidth=3)
plt.xticks(np.arange(0, m_len, 1))
plt.grid()
plt.axhline(0, color='red')
plt.title("BPSK Modulated Signal")
plt.xlabel("Time")
plt.ylabel('Amplitude') 
plt.show()


# In[10]:


# Assume that the recovered carrier signal is already obtained
# For simplicity, let's assume it's a cosine wave with the same frequency and length as the received signal
import numpy as np
recovered_carrier_signal = np.cos(2 * np.pi * 2 * t)

# Multiply received signal by recovered carrier signal
received_signal_multiplied = bpsk_wave * recovered_carrier_signal

# Plotting Multiplied Signal
# plt.figure(figsize=(8, 6))
plt.plot(t, received_signal_multiplied)
plt.grid()
plt.axhline(0, color='red')
plt.title("Received Signal Multiplied by Recovered Carrier Signal")
plt.xlabel("Time")
plt.ylabel('Amplitude') 
plt.show()


# In[11]:


# Define the integration period (one bit period)
integration_period = 100  # Assuming each bit lasts for 100 samples

# Perform integration using a moving average filter
integrated_signal = np.convolve(received_signal_multiplied, np.ones(integration_period)/integration_period, mode='valid')

# Plotting Integrated Signal
plt.figure(figsize=(8, 6))
plt.plot(np.arange(0, len(integrated_signal)), integrated_signal)
plt.grid()
plt.axhline(0, color='red')
plt.title("Integrated Signal")
plt.xlabel("Time")
plt.ylabel('Integrated Amplitude') 
plt.show()


# In[17]:


# Define the threshold
threshold = 0

# Make decisions using the threshold detector
decisions = np.where(integrated_signal > threshold, 1, 0)

# Plotting Decisions
plt.figure(figsize=(8, 6))
plt.stem(np.arange(0, len(decisions)), decisions, markerfmt='ro', use_line_collection=True)
plt.title("Decisions made by Threshold Detector")
plt.xlabel("Time")
plt.ylabel("Decision (1 or 0)")
plt.ylim(-0.1, 1.1)
plt.grid()
plt.show()


# In[13]:


# Define SNR range
snr_range = range(-4, 11)

# Initialize lists to store BER values
simulated_ber = []
theoretical_ber = []

# Loop through each SNR value
for snr in snr_range:
    # Add AWGN to the BPSK modulated signal
    noise_std = np.sqrt(0.5 / (10 ** (snr / 10)))  # Calculate noise standard deviation
    noisy_signal = bpsk_wave + np.random.normal(0, noise_std, len(bpsk_wave))
    
    # Demodulate the received signal
    demodulated_signal = noisy_signal * np.cos(2 * np.pi * 2 * t)
    
    # Compute the Bit Error Rate (BER)
    errors = np.sum(np.abs(np.array(bpsk) - np.sign(demodulated_signal))) / 2
    ber = errors / len(bpsk)
    simulated_ber.append(ber)
    
    # Calculate theoretical BER
    theoretical_ber.append(0.5 * np.exp(-0.5 / (10 ** (snr / 10))))

# Plot the simulated and theoretical BER curves
plt.figure(figsize=(10, 6))
plt.plot(snr_range, simulated_ber, marker='o', label='Simulated BER')
plt.plot(snr_range, theoretical_ber, marker='s', linestyle='--', label='Theoretical BER')
plt.xlabel('SNR (dB)')
plt.ylabel('Bit Error Rate (BER)')
plt.title('Simulated vs Theoretical BER for BPSK')
plt.legend()
plt.grid(True)
plt.show()


# In[ ]:




