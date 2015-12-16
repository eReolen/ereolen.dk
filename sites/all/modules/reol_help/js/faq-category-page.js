(function($) {
  Drupal.behaviors.faq_category_page = {
    attach: function() {
      $('.faq-category-page .faq-category-group a').click(function(e) {
        e.preventDefault();

        $(this).closest('.faq-category-group').toggleClass('open');
      });
    }
  };
})(jQuery);
