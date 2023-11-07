document.addEventListener("DOMContentLoaded", function () {
    var i = 0;
    function change() {
      var doc = document.getElementById("section-span");
      var color = ["black", "blue", "brown", "green"];
      doc.style.color = color[i];
      i = (i + 1) % color.length;
    }
    setInterval(change, 1000);
})