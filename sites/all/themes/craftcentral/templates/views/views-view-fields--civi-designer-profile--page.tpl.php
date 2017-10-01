<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php
print $fields['hero_picture_28']->content;
?>
<div class="container">
	<div class="row">
		<div class="col-xs-12 col-sm-12 col-md-12 col-lg-12 top_details">
			<h2>About</h2>
			<p><?php print $fields['category_25']->content; ?></p><span class="pipe_separator">|</span><p><?php print $fields['city']->content; ?>, <?php print $fields['state_province']->content; ?></p><span class="pipe_separator">|</span><p><?php if($fields['do_you_accept_commissions__26']->content == "yes"){ print "Accepts Commisions"; } else { print "Does not Accepts Commisions"; } ?></p>
		</div>
	</div>
	<div class="row">
		<div class="bottom_details clearfix">
			<div class="col-xs-12 col-sm-12 col-md-2 col-lg-2 dm-profile-image">
				<?php print $fields['profile_picture_29']->content; ?>
			</div>
			<div class="col-xs-12 col-sm-12 col-md-7 col-lg-7 dm-profile-bio">
				<h3>Biography</h3>
				<?php print $fields['biography_27']->content; ?>
			</div>
			<div class="col-xs-12 col-sm-12 col-md-3 col-lg-3 dm-profile-links">
				<h3>Connect</h3>
				<a href="<?php print $fields['website_url_30']->content; ?>"><i class="fa fa-globe" aria-hidden="true"></i> Visit Website</a>
				<a href="mailto:<?php print $fields['email']->content; ?>"><i class="fa fa-envelope-o" aria-hidden="true"></i> Contact this designer maker</a>
				<ul>
					<li><a href="<?php print $fields['facebook_link_31']->content; ?>" class="facebook"><i class="fa fa-facebook" aria-hidden="true"></i></a></li>
					<li><a href="<?php print $fields['twitter_link_32']->content; ?>" class="twitter"><i class="fa fa-twitter" aria-hidden="true"></i></a></li>
					<li><a href="<?php print $fields['pinterest_link_33']->content; ?>" class="pinterest"><i class="fa fa-pinterest-p" aria-hidden="true"></i></a></li>
					<li><a href="<?php print $fields['linkedin_profile_link_34']->content; ?>" class="linkedin"><i class="fa fa-linkedin" aria-hidden="true"></i></a></li>
					<li><a href="<?php print $fields['youtube_link_35']->content; ?>" class="youtube"><i class="fa fa-youtube" aria-hidden="true"></i></a></li>
				</ul>
			</div>
		</div>
	</div>
</div>