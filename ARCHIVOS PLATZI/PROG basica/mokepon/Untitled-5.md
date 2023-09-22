var buttons = ["up", "down", "left", "right", "A", "B"];

var gameButtons = [
    {name: 'up', value: 'UP'},
    {name: 'down', value: 'DOWN'},
    {name: 'left', value: 'LEFT'},
    {name: 'right', value: 'RIGHT'},
    {name: 'jump', value: 'SPACE'}
]; 
 
var moveValues = {}; 
for (var i = 0; i < gameButtons.length; i++) { 
   moveValues[gameButtons[i].name] = 10; 
}