int minPartitions(char* n) {
if (n[0] == '0'){
    return 0;
}
int len = strlen(n); 
if (len < 1 || len > 100000)
 { 
    return 0; 
 }
 for (int i =0; i < len; i++){
    if (n[i]<'0' || n[i] > '9'){
        return 0;
    }
 }  
 int answer = 0;
  for (int i = 0; n[i] != '\0'; i++) 
  { int digit = n[i] - '0'; 
  if (digit > answer) {
     answer = digit; } 
     } return answer; 
}