![ED1C6942EB78DFA2B90B35D9BB7E5DDF](https://tva1.sinaimg.cn/large/006y8mN6ly1g7gpuf1wk8j31400u04qp.jpg)



## Requirements

1. Administrator input S to start the system when the cycle begin. Then the system need to list all boats and mark which of them can be rented when the toursts want to rent a boat. Meanwhile, when one boat is rented, the boat in the system need to be marked 'already rented'. Also, the system will record rental begin time.
2. Administrator input R when toursts return a boat. And the boat in the system will be marked 'free'. Also the rental attribute such rental time, number of rents will be recorded in the system.
3. Administrator input E when one day end and cycle end. Then the system can print out the number and average renting time, renting number and the longest renting time according to diffenent time(all day, monring, or afternoon)
4. Administrator input D when the communication has problem, then the incomplete rentings message can be deleted.



**Use case:** Record rental information

**Primary actor**: Administrator

**Goal in context:** To set the system to record the rental information when the toursts rent or return a boat.

**Preconditions:** The administrator start the cycle

**Trigger:** Toursts rent,return a boat or communication has a problem

**Scenario:**

1. Administrator: start the cycle
2. Administrator: input b to rent out and input r to take back boat
3. Administrator: delete incomplete rentings message
4. Administrator: end the cycle
5. Administrator: observes the system output when end the cycle

**Exceptions:**

1. The communication has problem, the incomplete renting message need to be deleted.
2. when rent boat, only those are free can be rented
3. when return boat, only those are aleady rented can be returned

**Priority:**  Essential

**When available:**  when the administrator start the cycle

**Frequency of use:** Many times per day

**Channel to actor:** Via control computer

**Secondary actors:** Support technician, toursts

**Channels to secondary actors:**

Support technician: online debuging

Toursts: connect administrator

**Open issues:**

1. When the cycle is over but there still are some boats not been returned, should the system visualization include them?
2. what should the system do if the boat is not returned for a long time ?

