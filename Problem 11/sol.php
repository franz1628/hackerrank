<?php
function birthday($s, $d, $m) {
    $count = 0;
    $n = count($s);
    
    $currentSum = 0;
    
    for ($i = 0; $i < $m; $i++) {
        $currentSum += $s[$i];
    }
    
    if ($currentSum === $d) {
        $count++;
    }
    
 
    for ($i = $m; $i < $n; $i++) {
        $currentSum += $s[$i] - $s[$i - $m]; 
        if ($currentSum === $d) {
            $count++;
        }
    }
    
    return $count;
}
