msg = 1;
sent = 0;
for (let day = 1; day <= 30; day++) {
    console.log("[Day"+ day + "] Messages: " + msg);
    sent += msg;
    msg *= 2;
}
console.log("Total sent: " + sent);