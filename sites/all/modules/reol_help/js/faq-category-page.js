(function($) {
  Drupal.behaviors.faq_category_page = {
    attach: function() {
      $('.faq-category-page .faq-category-group > a').click(function(e) {
        e.preventDefault();

        var elem = $(this).closest('.faq-category-group');
        var qa = elem.find('.faq-qa');
        var qa_inner = qa.find('.faq-qa-inner');

        if (elem.hasClass('open')) {
          qa.css({height: 0});
          $(this).closest('.faq-category-group').removeClass('open');
        }
        else {
          var height = qa_inner.height();
          qa.css({height: height});
          $(this).closest('.faq-category-group').addClass('open');
        }
      });
    }
  };
})(jQuery);
