 Let's analyze how the binary representation of 𝑥 changes after the operation. If there are no zeroes at the end of it, appending 0 just reverses the binary representation; if there are any trailing zeroes, we remove them and reverse the binary representation. If we append 1, we just reverse the binary representation and add 1 at the beginning. No matter which action we choose on the first step, the resulting binary representation will have 1 at its beginning and 1 at its end, so no bits can be removed from it (no zero from the resulting binary representation can become leading). It means that every number we can obtain from 𝑥 will have the following form: several ones (maybe none), then 𝑠, then several ones (again, maybe none), where 𝑠

is one of the following four strings:

    the binary representation of 𝑥

after appending 1
in the first operation;
the binary representation of 𝑥
after appending 0

    in the first operation;
    one of the aforementioned representations, but reversed. 

We can check that 𝑦
meets one of these four templates, but since we only considered the case when we apply at least one operation, we also have to verify if 𝑥=𝑦.