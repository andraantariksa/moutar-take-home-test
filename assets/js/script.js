const collapsibleMenu = document.querySelector(".collapsible-menu");
const navbarMenus = document.querySelector(".navbar-menus");
const navbarTitle = document.querySelector("#navbar-title");
collapsibleMenu.addEventListener("click", () => {
    collapsibleMenu.classList.toggle("open");
    navbarMenus.classList.toggle("open");
    navbarTitle.classList.toggle("open");
});
