#include<stdio.h>
 #include<string.h>
 void respond(char*value){
 if(strcasecmp(value,"HI")==0){
 printf("Bot: Hi dear customer\n");
 }
 else if(strcasecmp(value,"I have a doubt.")==0 || strstr(value, "doubt") !=0) {
 printf("Bot: I understand. Please feel free to share your doubt, and I'll do my best
 to assist you.\n");
 }
 else if(strcasecmp(value,"What are the shipping options, speeds , and associated
 charges?")==0 || strstr(value, "shipping") !=0 || strstr(value, "speeds") !=0 || strstr(
 value, "charges") !=0) {
 printf("Bot: same day delivery=119 rupees\n one day delivery=100 rupee\n standard
 delivery=40 rupee\n");
 }
 else if(strcasecmp(value,"What should I do if I receive a damaged, defective , or
 incorrect product?")==0 || strstr(value, "damaged") !=0 || strstr(value, "defective") !=0
 || strstr(value, "product") !=0) {
 printf("Bot: 1.open the app and go to order\n 2.click on return or replace order\n
 3.refund to your bank account\n");
 }
 else if(strcasecmp(value,"How can I cancel an item from my order?")==0 || strstr(value, 
"cancelling") !=0 || strstr(value, "cancel")!= 0){
 printf("Bot: step1.go to your order\n step2.select the item you want to cancel and
 click cancel items\n step3.if already the order is placed then request for
 cancellation\n");
 }
 else if(strcasecmp(value,"What payment methods do you accept?")==0 || strstr(value, 
"payment") !=0) {
 printf("Bot: 1.Cash on delivery\n 2.EMI\n 3.Credit/Debit card\n 4.UPI\n");
 }
 else if(strcasecmp(value,"How can I track my package and check its status?")==0 || strstr
 (value, "package") !=0 || strstr(value, "track") !=0 || strstr(value, "status")   !=0) {
 printf("Bot: step1.go to your order\n step2.click on the order you want to track\n
 step3.select track package next to your order\n step4.select all updates to view your
 order\n");
 }
 else if(strcasecmp(value,"What should I do if I encounter issues with a return pickup?"
 )==0 || strstr(value, "return") || strstr(value, "pickup")  !=0 || strstr(value, "issues"
 ) !=0) {
}
 printf("Bot: 1.if the customer is not available during pick then he will attempt 3
 times to reschedule the pick up\n 2.delivery agent will check the product during the pick
 up,if there is some damage or misplacement the delivery agent may cancel the pickup\n");
 else if(strcasecmp(value,"What should I do if my shipment is delayed?")==0 || strstr(
 value, "delay") !=0 || strstr(value, "delayed")!=0 || strstr(value, "shipment")!=0) {
 printf("Bot: 1.If there is any delay we will update the information in delivery
 date\n 2.If the order is out of stock and can't be available in 48hours,the order will be
 cancelled and money will be refunded\n");
 }
 else if(strcasecmp(value,"How can I change my account settings?")==0 || strstr(value, 
"settings" ) !=0 || strstr(value, "setting")!=0 || strstr(value, "account")!=0 || strstr(
 value, "change")!=0){
 printf("Bot: step1.Go to login and security\n step2.enter the username and the
 password\n step3.check the opt send on your email address\n step4.enter the otp and you
 will be redirected to edit page\n step5.Now you can change the information,after editing
 click on save changes and the info will be updated\n");
 }
 }
 int main(){
 char value[100];
 printf("Welcome to the customer service portal\n");
 printf("How can I help you:\n");
 while(1){
 fgets(value,sizeof(value),stdin);
 value[strcspn(value,"\n")]='\0';
 respond(value);
 }
 return 0;
       
