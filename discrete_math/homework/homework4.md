$$
\begin{align}
& Let\ S(x,l)\ means\ there\ is\ a\ student\ x\ in\ this\ class\ and\ he\ can\ speak\ language\ l\\
& The\ domain\ x\ is\ all\ students\ in\ the\ class\\
& The\ domain\ l\ is\ all\ the\ language\\
& The\ result\ is:\\
& \exists x S(x,Hindi)
\end{align}
$$




$$
\begin{align}
& Let\ P(x,s)\ means\ there\ is\ a\ student\ x\ in\ this\ class\ and\ he\ can\ play\ sport\ s\\
& The\ domain\ x\ is\ all\ students\ in\ the\ class\\
& The\ domain\ s\ is\ all\ the\ sports\\
& The\ result\ is:\\
& \forall x \exists s P(x,s)
\end{align}
$$



#### 


$$
\begin{align}
& Let\ V(x,p)\ means\ there\ is\ a\ student\ x\ in\ this\ class\ and\ he\ has\ visited	\ place\ p\\
& The\ domain\ x\ is\ all\ students\ in\ the\ class\\
& The\ domain\ p\ is\ all\ the\ places\\
& The\ result\ is:\\
& \exists x (V(x,Alaska) \wedge \neg V(x,Hawaii))
\end{align}
$$






$$
\begin{align}
& Let\ L(x,p)\ means\ there\ is\ a\ student\ x\ in\ this\ class\ and\ he\ has\ learned	\ programming\ language\ p \\
& The\ domain\ x\ is\ all\ students\ in\ the\ class\\
& The\ domain\ p\ is\ all\ the\ programming\ language \\
& The\ result\ is:\\
& \forall x \exists p L(x,p)
\end{align}
$$






$$
\begin{align}
& Let\ T(x,c)\ means\ there\ is\ a\ student\ x\ in\ this\ class\ and\ he\ has\ learned	\ course\ c \\
& Let\ O(c,d)\ means\ course\ c\ is\ offered\ by\ department\ d\\
& The\ domain\ x\ is\ all\ students\ in\ the\ class\\
& The\ domain\ c\ is\ all\ the\ courses\\
& The\ domain \ d\ is\ all\ the\ departments\\
& The\ sentence\ can\ be\ rewrited\ to\\
& All\ the\ courses\ offered\ by\ one\ department\ have\ taken\ by\ student\ s\ in\ this\ class\\
& There\ is\ some\ student\ 𝑥\ and\ there is\ some\ department\ d,\ such\ that\\& 𝑥\ has\ taken\ every\ course\ c\ offered\ by\ 𝑧:\\
& The\ result\ is: \\
& \exists x \forall c \exists d (O(c,d) \rightarrow T(x,c))
\end{align}
$$






$$
\begin{align}
& Let\ G(x,y)\ student\ x\ and\ student\ y\ in\ this\ class\ grow\ up\ in\ the\ same\ towm\\
& The\ domain\ x\ is\ all\ students\ in\ the\ class\\
& The\ result\ is:\\
& \exist x \exists y (x \neq y \wedge G(x,y) \wedge \forall z(G(x,z) \rightarrow ( x = z \vee z=y)))
\end{align}
$$



$$
\begin{align}
& Let\ C(x,y,g)\ means\ student\ x\ has\ chatted\ with\ student\ y\ in\ chat\ group\ g \\
& The\ domain\ x,y\ is\ all\ students\ in\ the\ class\\
& The\ domain\ g\ is\ all\ the\ chatted\ group \\
& The\ result\ is:\\
& \forall x \exists y\exist g(x \neq y\wedge C(x,y,c))
\end{align}
$$
