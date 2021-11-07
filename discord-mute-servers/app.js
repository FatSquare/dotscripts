var lensrv = document.getElementsByClassName("wrapper-1BJsBx").length
for(var i = 1;i< lensrv;i++){  
  document.getElementsByClassName("wrapper-1BJsBx")[i].dispatchEvent(new MouseEvent('contextmenu', {'bubbles': true}));
  var mute1 = document.getElementsByClassName("label-22pbtT")[1]
  var mute2 = document.getElementsByClassName("label-22pbtT")[2]
  if(mute1.innerHTML.toLowerCase() == "mute server"){
    mute1.click()
    console.log(i)
  }
  else if(mute2.innerHTML.toLowerCase() == "mute server"){
      mute2.click()
      console.log(i)
  }
}
