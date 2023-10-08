const seen = new Set();
    
for (let num of a) {
    if (seen.has(num)) {
        seen.delete(num);
    } else {
        seen.add(num);
    }
}

return seen.values().next().value;