#Algorithm To implement Shortest Job First

n=int(input('Enter the Number of Process : '))
process=[int(x) for x in input('Enter the Process Number : ').split()]
burst_time=[int(x) for x in input('Enter the burst time of the Process : ').split()]
total_waiting_time=0
process_burst_time=zip(process,burst_time)
process_burst_time=sorted(process_burst_time,key=lambda x:x[1])
iProcess=0
for runing_process,process_burst_Time in process_burst_time:
      print('Waiting time of the Process '+str((iProcess+1))+' is : '+str(total_waiting_time))
      total_waiting_time+=process_burst_Time
      iProcess+=1
total_waiting_time=total_waiting_time-max(burst_time)
print("Total Waiting time of the Process is : "+str(total_waiting_time))
print("Order of the Process are : ",end="")
for runing_process,process_burst_Time in process_burst_time:
      print(runing_process,end=" ")
print()
print("Average Waiting time of the Process is :  "+str(total_waiting_time/n))
