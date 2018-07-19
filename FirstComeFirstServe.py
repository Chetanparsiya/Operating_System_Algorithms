#Algorithm To implement First Come First Serve


n=int(input('Enter the Number of Process : '))
process=[int(x) for x in input('Enter the Process Number : ').split()]
burst_time=[int(x) for x in input('Enter the burst time of the Process : ').split()]
total_waiting_time=0
for ith_process  in range(n):
      print('Waiting time of the Process '+str((ith_process+1))+' is : '+str(total_waiting_time))
      total_waiting_time+=burst_time[ith_process]
      
*mid,last=burst_time
total_waiting_time=total_waiting_time-last
print("Total Waiting time of the Process is : "+str(total_waiting_time))

print("Average Waiting time of the Process is :  "+str(total_waiting_time/n))
