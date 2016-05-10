(function ($) {

  Drupal.behaviors.customtooltip = {
  attach: function(context, settings) {

  $('.taxonomy-term-description p').tooltip();
  
},
};
 })(jQuery);