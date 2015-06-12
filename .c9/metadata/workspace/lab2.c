{"filter":false,"title":"lab2.c","tooltip":"/lab2.c","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":13,"column":23},"end":{"row":13,"column":24},"action":"remove","lines":["i"],"id":1}],[{"start":{"row":13,"column":22},"end":{"row":13,"column":23},"action":"remove","lines":["s"],"id":2}],[{"start":{"row":13,"column":22},"end":{"row":13,"column":23},"action":"insert","lines":["S"],"id":3}],[{"start":{"row":13,"column":23},"end":{"row":13,"column":24},"action":"insert","lines":["I"],"id":4}],[{"start":{"row":13,"column":24},"end":{"row":13,"column":25},"action":"insert","lines":["G"],"id":5}],[{"start":{"row":13,"column":25},"end":{"row":13,"column":26},"action":"insert","lines":["I"],"id":6}],[{"start":{"row":13,"column":26},"end":{"row":13,"column":27},"action":"insert","lines":["N"],"id":7}],[{"start":{"row":13,"column":27},"end":{"row":13,"column":28},"action":"insert","lines":["T"],"id":8}],[{"start":{"row":15,"column":1},"end":{"row":17,"column":61},"action":"remove","lines":["","    /* Reset handler to catch SIGINT next time.","       Refer http://en.cppreference.com/w/c/program/signal */"],"id":9}],[{"start":{"row":22,"column":1},"end":{"row":24,"column":61},"action":"remove","lines":["","    /* Set the SIGINT (Ctrl-C) signal handler to sigintHandler ","       Refer http://en.cppreference.com/w/c/program/signal */"],"id":10}],[{"start":{"row":25,"column":5},"end":{"row":25,"column":23},"action":"remove","lines":["* Infinite loop */"],"id":11},{"start":{"row":25,"column":5},"end":{"row":25,"column":6},"action":"insert","lines":["/"]}],[{"start":{"row":25,"column":6},"end":{"row":25,"column":7},"action":"insert","lines":["b"],"id":12}],[{"start":{"row":25,"column":7},"end":{"row":25,"column":8},"action":"insert","lines":["u"],"id":13}],[{"start":{"row":25,"column":8},"end":{"row":25,"column":9},"action":"insert","lines":["s"],"id":14}],[{"start":{"row":25,"column":9},"end":{"row":25,"column":10},"action":"insert","lines":["y"],"id":15}],[{"start":{"row":25,"column":10},"end":{"row":25,"column":11},"action":"insert","lines":[" "],"id":16}],[{"start":{"row":25,"column":11},"end":{"row":25,"column":12},"action":"insert","lines":["w"],"id":17}],[{"start":{"row":25,"column":12},"end":{"row":25,"column":13},"action":"insert","lines":["a"],"id":18}],[{"start":{"row":25,"column":13},"end":{"row":25,"column":14},"action":"insert","lines":["i"],"id":19}],[{"start":{"row":25,"column":14},"end":{"row":25,"column":15},"action":"insert","lines":["t"],"id":20}],[{"start":{"row":25,"column":15},"end":{"row":25,"column":16},"action":"insert","lines":["s"],"id":21}],[{"start":{"row":25,"column":16},"end":{"row":25,"column":17},"action":"insert","lines":[" "],"id":22}],[{"start":{"row":25,"column":17},"end":{"row":25,"column":18},"action":"insert","lines":["l"],"id":23}],[{"start":{"row":25,"column":18},"end":{"row":25,"column":19},"action":"insert","lines":["o"],"id":24}],[{"start":{"row":25,"column":19},"end":{"row":25,"column":20},"action":"insert","lines":["o"],"id":25}],[{"start":{"row":25,"column":20},"end":{"row":25,"column":21},"action":"insert","lines":["p"],"id":26}],[{"start":{"row":25,"column":21},"end":{"row":25,"column":22},"action":"insert","lines":[" "],"id":27}],[{"start":{"row":20,"column":1},"end":{"row":21,"column":0},"action":"insert","lines":["",""],"id":28},{"start":{"row":21,"column":0},"end":{"row":21,"column":1},"action":"insert","lines":[" "]}],[{"start":{"row":21,"column":0},"end":{"row":21,"column":1},"action":"remove","lines":[" "],"id":29}],[{"start":{"row":21,"column":0},"end":{"row":27,"column":1},"action":"insert","lines":["// signal handler for SIGINT","void sigintHandler(int sig_num)","{","    signal(SIGINT, sigintHandler);","    printf(\"\\n Cannot be terminated using Ctrl+C \\n\");","    fflush(stdout);","}"],"id":30}],[{"start":{"row":21,"column":25},"end":{"row":21,"column":28},"action":"remove","lines":["INT"],"id":31},{"start":{"row":21,"column":25},"end":{"row":21,"column":26},"action":"insert","lines":["S"]}],[{"start":{"row":21,"column":26},"end":{"row":21,"column":27},"action":"insert","lines":["T"],"id":32}],[{"start":{"row":21,"column":27},"end":{"row":21,"column":28},"action":"insert","lines":["P"],"id":33}],[{"start":{"row":22,"column":10},"end":{"row":22,"column":11},"action":"remove","lines":["t"],"id":34}],[{"start":{"row":22,"column":9},"end":{"row":22,"column":10},"action":"remove","lines":["n"],"id":35}],[{"start":{"row":22,"column":8},"end":{"row":22,"column":9},"action":"remove","lines":["i"],"id":36}],[{"start":{"row":22,"column":8},"end":{"row":22,"column":9},"action":"insert","lines":["s"],"id":37}],[{"start":{"row":22,"column":9},"end":{"row":22,"column":10},"action":"insert","lines":["t"],"id":38}],[{"start":{"row":22,"column":10},"end":{"row":22,"column":11},"action":"insert","lines":["p"],"id":39}],[{"start":{"row":24,"column":16},"end":{"row":24,"column":17},"action":"remove","lines":["T"],"id":40}],[{"start":{"row":24,"column":15},"end":{"row":24,"column":16},"action":"remove","lines":["N"],"id":41}],[{"start":{"row":24,"column":14},"end":{"row":24,"column":15},"action":"remove","lines":["I"],"id":42}],[{"start":{"row":24,"column":14},"end":{"row":24,"column":15},"action":"insert","lines":["S"],"id":43}],[{"start":{"row":24,"column":15},"end":{"row":24,"column":16},"action":"insert","lines":["T"],"id":44}],[{"start":{"row":24,"column":16},"end":{"row":24,"column":17},"action":"insert","lines":["P"],"id":45}],[{"start":{"row":24,"column":24},"end":{"row":24,"column":25},"action":"remove","lines":["t"],"id":46}],[{"start":{"row":24,"column":23},"end":{"row":24,"column":24},"action":"remove","lines":["n"],"id":47}],[{"start":{"row":24,"column":22},"end":{"row":24,"column":23},"action":"remove","lines":["i"],"id":48}],[{"start":{"row":24,"column":22},"end":{"row":24,"column":23},"action":"insert","lines":["s"],"id":49}],[{"start":{"row":24,"column":23},"end":{"row":24,"column":24},"action":"insert","lines":["t"],"id":50}],[{"start":{"row":24,"column":24},"end":{"row":24,"column":25},"action":"insert","lines":["p"],"id":51}],[{"start":{"row":17,"column":12},"end":{"row":17,"column":49},"action":"remove","lines":["\\n Cannot be terminated using Ctrl+C "],"id":52},{"start":{"row":17,"column":12},"end":{"row":17,"column":20},"action":"insert","lines":["OH NO!!!"]}],[{"start":{"row":25,"column":12},"end":{"row":25,"column":49},"action":"remove","lines":["\\n Cannot be terminated using Ctrl+C "],"id":53},{"start":{"row":25,"column":12},"end":{"row":25,"column":20},"action":"insert","lines":["OH NO!!!"]}],[{"start":{"row":31,"column":1},"end":{"row":31,"column":4},"action":"insert","lines":["   "],"id":54}],[{"start":{"row":31,"column":4},"end":{"row":31,"column":5},"action":"insert","lines":["s"],"id":55}],[{"start":{"row":31,"column":5},"end":{"row":31,"column":6},"action":"insert","lines":["i"],"id":56}],[{"start":{"row":31,"column":6},"end":{"row":31,"column":7},"action":"insert","lines":["g"],"id":57}],[{"start":{"row":31,"column":7},"end":{"row":31,"column":8},"action":"insert","lines":["n"],"id":58}],[{"start":{"row":31,"column":8},"end":{"row":31,"column":9},"action":"insert","lines":["a"],"id":59}],[{"start":{"row":31,"column":9},"end":{"row":31,"column":10},"action":"insert","lines":["l"],"id":60}],[{"start":{"row":24,"column":14},"end":{"row":24,"column":15},"action":"insert","lines":["T"],"id":61}],[{"start":{"row":31,"column":10},"end":{"row":31,"column":12},"action":"insert","lines":["()"],"id":62}],[{"start":{"row":31,"column":11},"end":{"row":31,"column":12},"action":"insert","lines":["S"],"id":63}],[{"start":{"row":31,"column":12},"end":{"row":31,"column":13},"action":"insert","lines":["I"],"id":64}],[{"start":{"row":31,"column":13},"end":{"row":31,"column":14},"action":"insert","lines":["G"],"id":65}],[{"start":{"row":31,"column":14},"end":{"row":31,"column":15},"action":"insert","lines":["T"],"id":66}],[{"start":{"row":31,"column":15},"end":{"row":31,"column":16},"action":"insert","lines":["S"],"id":67}],[{"start":{"row":31,"column":16},"end":{"row":31,"column":17},"action":"insert","lines":["T"],"id":68}],[{"start":{"row":31,"column":17},"end":{"row":31,"column":18},"action":"insert","lines":["P"],"id":69}],[{"start":{"row":31,"column":18},"end":{"row":31,"column":19},"action":"insert","lines":[","],"id":70}],[{"start":{"row":31,"column":19},"end":{"row":31,"column":20},"action":"insert","lines":[" "],"id":71}],[{"start":{"row":31,"column":20},"end":{"row":31,"column":21},"action":"insert","lines":["S"],"id":72}],[{"start":{"row":31,"column":21},"end":{"row":31,"column":22},"action":"insert","lines":["I"],"id":73}],[{"start":{"row":31,"column":21},"end":{"row":31,"column":22},"action":"remove","lines":["I"],"id":74}],[{"start":{"row":31,"column":20},"end":{"row":31,"column":21},"action":"remove","lines":["S"],"id":75}],[{"start":{"row":31,"column":20},"end":{"row":31,"column":21},"action":"insert","lines":["s"],"id":76}],[{"start":{"row":31,"column":21},"end":{"row":31,"column":22},"action":"insert","lines":["i"],"id":77}],[{"start":{"row":31,"column":22},"end":{"row":31,"column":23},"action":"insert","lines":["g"],"id":78}],[{"start":{"row":31,"column":23},"end":{"row":31,"column":24},"action":"insert","lines":["s"],"id":79}],[{"start":{"row":31,"column":24},"end":{"row":31,"column":25},"action":"insert","lines":["t"],"id":80}],[{"start":{"row":31,"column":24},"end":{"row":31,"column":25},"action":"remove","lines":["t"],"id":81}],[{"start":{"row":31,"column":23},"end":{"row":31,"column":24},"action":"remove","lines":["s"],"id":82}],[{"start":{"row":31,"column":23},"end":{"row":31,"column":24},"action":"insert","lines":["t"],"id":83}],[{"start":{"row":31,"column":24},"end":{"row":31,"column":25},"action":"insert","lines":["s"],"id":84}],[{"start":{"row":31,"column":25},"end":{"row":31,"column":26},"action":"insert","lines":["t"],"id":85}],[{"start":{"row":31,"column":26},"end":{"row":31,"column":27},"action":"insert","lines":["p"],"id":86}],[{"start":{"row":31,"column":27},"end":{"row":31,"column":28},"action":"insert","lines":["H"],"id":87}],[{"start":{"row":31,"column":28},"end":{"row":31,"column":29},"action":"insert","lines":["a"],"id":88}],[{"start":{"row":31,"column":29},"end":{"row":31,"column":30},"action":"insert","lines":["n"],"id":89}],[{"start":{"row":31,"column":30},"end":{"row":31,"column":31},"action":"insert","lines":["d"],"id":90}],[{"start":{"row":31,"column":31},"end":{"row":31,"column":32},"action":"insert","lines":["l"],"id":91}],[{"start":{"row":31,"column":32},"end":{"row":31,"column":33},"action":"insert","lines":["e"],"id":92}],[{"start":{"row":31,"column":33},"end":{"row":31,"column":34},"action":"insert","lines":["r"],"id":93}],[{"start":{"row":24,"column":23},"end":{"row":24,"column":24},"action":"insert","lines":["t"],"id":94}],[{"start":{"row":22,"column":9},"end":{"row":22,"column":10},"action":"insert","lines":["t"],"id":95}],[{"start":{"row":22,"column":9},"end":{"row":22,"column":10},"action":"remove","lines":["t"],"id":96}],[{"start":{"row":22,"column":8},"end":{"row":22,"column":9},"action":"insert","lines":["t"],"id":97}],[{"start":{"row":27,"column":1},"end":{"row":28,"column":0},"action":"insert","lines":["",""],"id":98}],[{"start":{"row":28,"column":0},"end":{"row":29,"column":0},"action":"insert","lines":["",""],"id":99}],[{"start":{"row":33,"column":35},"end":{"row":33,"column":36},"action":"insert","lines":[";"],"id":100}],[{"start":{"row":21,"column":25},"end":{"row":21,"column":26},"action":"insert","lines":["T"],"id":101}]]},"ace":{"folds":[],"scrolltop":20.5,"scrollleft":0,"selection":{"start":{"row":0,"column":0},"end":{"row":40,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":0,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1422988310000,"hash":"04e12a9ac78a87b6ac99f97ea03017115232f863"}