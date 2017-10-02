jQuery(document).ready(function($) {
  $('.designer_carousel .gallery').slick({
  	centerMode: true,
  	centerPadding: '200px',
  	slidesToShow: 1,
    prevArrow: '<button type="button" class="slick-prev"><i class="fa fa-chevron-left" aria-hidden="true"></i></button>',
    nextArrow: '<button type="button" class="slick-next"><i class="fa fa-chevron-right" aria-hidden="true"></i></button>',
  	responsive: [
  		{
  			breakpoint: 768,
  			settings: {
  				arrows: false,
  				centerMode: false,
  				centerPadding: '40px',
  				slidesToShow: 1
  			}
  		}, 
  		{
  			breakpoint: 480,
  			settings: {
  				arrows: false,
  				centerMode: false,
  				centerPadding: '40px',
  				slidesToShow: 1
  			}
  		}
  	]
  });
});
