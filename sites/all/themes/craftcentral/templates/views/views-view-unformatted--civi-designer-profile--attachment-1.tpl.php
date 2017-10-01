<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="container designer_carousel">
	<h2>Portfolio</h2>
	<div class="gallery">
		<?php if (!empty($title)): ?>
		  <h3><?php print $title; ?></h3>
		<?php endif; ?>
		<?php foreach ($rows as $id => $row): ?>
		  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
		  	<div class="slide_contents">
		    	<?php print $row; ?>
		    </div>
		  </div>
		<?php endforeach; ?>
	</div>
</div>