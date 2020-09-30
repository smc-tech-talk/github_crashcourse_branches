const posts = document.getElementsByTagName("main")[0];
const barContainer = document.getElementsByClassName("progress_bar_container")[0];
const bar = document.getElementsByClassName("progress_bar")[0];
const header = document.getElementsByTagName("header")[0];

const updateBarWidth = () => {
    var windowBottom = window.scrollY - window.innerHeight;
    var headerBottom = header.getBoundingClientRect().bottom;
    var postTop = posts.getBoundingClientRect().top;
    var postBottom = posts.getBoundingClientRect().bottom;
    var percentage = (window.scrollY - window.innerHeight / postBottom)*0.1;
    if(postTop >= headerBottom){
        bar.style.width = "0%"
    }else if(windowBottom > postBottom){
        bar.style.width = "100%"
    }else{
        bar.style.width = `${percentage}%`
    }
}
if(posts){
    //addEventListener("scroll", checkBottom);
    addEventListener("scroll", updateBarWidth);
}