; Drupal.org release file.
core = 7.x
api = 2

; Basic contributed modules.

includes[mountbatten_sitewide] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_sitewide.make

projects[entityreference][version] = 1.1
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[faq][version] = 1.0-rc3
projects[faq][type] = "module"
projects[faq][subdir] = "contrib"

projects[features_extra][version] = 1.0
projects[features_extra][type] = "module"
projects[features_extra][subdir] = "contrib"

projects[feeds][version] = 2.0-beta2
projects[feeds][type] = "module"
projects[feeds][subdir] = "contrib"
#projects[feeds][patch][] = "https://www.drupal.org/files/issues/feeds-undefined-variable-original-author-2117537-7.patch"
# I needed to roll the last 2 patches into 1 to make this makefile work
#projects[feeds][patch][] = "https://raw.githubusercontent.com/DataDotUG/datadotugw/7.x-1.x/feeds_1127696-97_and_856316-7.patch"
#projects[feeds][patch][] = "https://www.drupal.org/files/issues/feeds-optional_source-856316-63.patch"
#projects[feeds][patch][] = "https://www.drupal.org/files/issues/1127696-97.patch"

projects[field_group][version] = 1.4
projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"

projects[fivestar][version] = 2.1
projects[fivestar][type] = "module"
projects[fivestar][subdir] = "contrib"

projects[fontawesome][version] = 2.1
projects[fontawesome][type] = "module"
projects[fontawesome][subdir] = "contrib"

projects[google_groups][version] = 2.0
projects[google_groups][type] = "module"
projects[google_groups][subdir] = "contrib"
projects[google_groups][patch][] = "http://cgit.drupalcode.org/google_groups/patch/?id=81b057b01020506d27763bb93e644054f53be9fb"

projects[job_scheduler][version] = 2.0-alpha3
projects[job_scheduler][type] = "module"
projects[job_scheduler][subdir] = "contrib"

projects[jquery_update][version] = 2.7
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[less][version] = 4.0
projects[less][type] = "module"
projects[less][subdir] = "contrib"

projects[link_favicon_formatter][version] = "1.6"
projects[link_favicon_formatter][type] = "module"
projects[link_favicon_formatter][subdir] = "contrib"

projects[nice_menus][version] = 2.5
projects[nice_menus][type] = "module"
projects[nice_menus][subdir] = "contrib"

projects[panels][version] = 3.5
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"

projects[panels_bootstrap_styles][version] = 1.0-alpha1
projects[panels_bootstrap_styles][type] = "module"
projects[panels_bootstrap_styles][subdir] = "contrib"
projects[panels_bootstrap_styles][patch][] = "https://www.drupal.org/files/issues/2152203-undefined_variable-7.patch"

projects[profile2][version] = 1.3
projects[profile2][type] = "module"
projects[profile2][subdir] = "contrib"

projects[publishcontent][version] = 1.3
projects[publishcontent][type] = "module"
projects[publishcontent][subdir] = "contrib"

projects[realname][version] = 1.2
projects[realname][type] = "module"
projects[realname][subdir] = "contrib"

projects[search_config][version] = 1.1
projects[search_config][type] = "module"
projects[search_config][subdir] = "contrib"

projects[service_links][version] = 2.3
projects[service_links][type] = "module"
projects[service_links][subdir] = "contrib"

projects[table_element][version] = 1.0-beta1
projects[table_element][type] = "module"
projects[table_element][subdir] = "contrib"

projects[twitter_block][version] = 2.3
projects[twitter_block][type] = "module"
projects[twitter_block][subdir] = "contrib"

projects[social_media_links][version] = 1.5
projects[social_media_links][type] = "module"
projects[social_media_links][subdir] = "contrib"

projects[votingapi][version] = 2.12
projects[votingapi][type] = "module"
projects[votingapi][subdir] = "contrib"

projects[views_bulk_operations][version] = 3.2
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"

projects[webform][version] = 4.11
projects[webform][type] = "module"
projects[webform][subdir] = "contrib"



includes[mountbatten_web_analytics] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_web_analytics.make
includes[mountbatten_seo] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_seo.make
includes[mountbatten_developer] = https://raw.githubusercontent.com/mountbatten/mountbatten_makefiles/master/mountbatten_developer.make

; Base theme.
projects[bootstrap][version] = 3.5
projects[bootstrap][type] = "theme"
#projects[bootstrap][patch] = "https://www.drupal.org/files/issues/bootstrap-webform-email.patch"

libraries[colorbox][download][type] = "file"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.x.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"

libraries[chosen][download][type] = "file"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/v1.1.0/chosen_v1.1.0.zip"
libraries[chosen][directory_name] = "chosen"
libraries[chosen][destination] = "libraries"

libraries[less][download][type] = "file"
libraries[less][download][url] = "https://github.com/oyejorge/less.php/releases/download/v1.7.0.2/less.php_1.7.0.2.zip"
libraries[less][directory_name] = "less.php"
libraries[less][destination] = "libraries"
