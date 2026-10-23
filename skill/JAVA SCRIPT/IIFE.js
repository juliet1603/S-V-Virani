(function (){
            console.log("hello world");
            
        })
        ();

(function karan(){
    console.log("Hello world")
})
();

(()=>{
    console.log("Arrow");
    
})
();


function Out() {
    console.log("Out Vala");
    function inner(){
        console.log("In vala");
        
    }
    inner()
}

Out();