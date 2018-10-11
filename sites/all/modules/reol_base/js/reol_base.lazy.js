/**
 * @file
 * User jQuery lazy load to images as the user scroll down the page.
 */

(function ($) {
  'use strict';

  Drupal.behaviors.reol_base_lazy = {
    attach: function (context, settings) {
      $('.js-lazy').Lazy({
        scrollDirection: 'vertical',
        effect: 'fadeIn',
        visibleOnly: true,
        onError: function (element) {
          console.log('error loading ' + element.data('src'));
        }
      });
    }
  };
})(jQuery);
