<?php

if (is_null($value)) {
    return false;
} elseif (is_string($value) && trim($value) === '') {
    return false;
} elseif ((is_array($value) || $value instanceof Countable) && count($value) < 1) {
    return false;
} elseif ($value instanceof File) {
    return (string) $value->getPath() !== '';
}

return true;

if (is_null($value)) {
    return false;
} else {
    return true;
}
