# JS CODE THAT WILL MUTE ALL DISCORD SERVERS FOR YOU :3

### Open javascript console (Ctrl +Shift +J) for chrome

### Copy paste the script there


```js
lensrv = document.getElementsByClassName("wrapper-1BJsBx").length // length of servers
for(var i = 1;i< lensrv;i++){  
	document.getElementsByClassName("wrapper-1BJsBx")[i].dispatchEvent(new MouseEvent('contextmenu', {'bubbles': true})); // right click the server
	var mute1 = document.getElementsByClassName("label-22pbtT")[1]
	var mute2 = document.getElementsByClassName("label-22pbtT")[2]
	if(mute1.innerHTML == "Mute server"){
		mute1.click()//if first element is the mute-b
	}else if(mute2.innerHTML == "Mute server"){
		mute2.click()//if second element is the mute-b
	}
}


```
