var dayOfTheWeek = function(day, month, year) {
    const date = new Date(year, month - 1, day); // JavaScript months are 0-based (0 = January, 11 = December)
    const daysOfWeek = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
    return daysOfWeek[date.getDay()];

};
