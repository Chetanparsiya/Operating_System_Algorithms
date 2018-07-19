#Algorithm To implement Priority Job Scheduling

n=int(input('Enter the Number of Process : '))
process=[int(x) for x in input('Enter the Process Number : ').split()]
burst_time=[int(x) for x in input('Enter the burst time of the Process : ').split()]
priority=[int(x) for x in input("Enter the Priority of the Process : ").split()]
total_waiting_time=0
priority_sorted =zip(process,priority ,burst_time)
priority_sorted =sorted(priority_sorted,key=lambda x:x[1],reverse=True)
iProcess=0
min_priority_burst_time=0
for runing_process,process_priority , process_burst_Time in priority_sorted:
      print('Waiting time of the Process '+str((iProcess+1))+' is : '+str(total_waiting_time))
      total_waiting_time+=process_burst_Time
      iProcess+=1
      min_priority_burst_time=process_burst_Time
total_waiting_time=total_waiting_time-min_priority_burst_time
print("Total Waiting time of the Process is : "+str(total_waiting_time))
print("Order of the Process are : ",end="")
for runing_process,process_priority,process_burst_Time in priority_sorted:
      print(runing_process,end=" ")
print()
print("Average Waiting time of the Process is :  "+str(total_waiting_time/n))
