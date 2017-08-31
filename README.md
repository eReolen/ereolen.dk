ereolen.dk
==========

Ereolen.dk anno 2015 based on DDB CMS

CircleCI build status, develop branch: [![Circle CI](https://circleci.com/gh/eReolen/ereolen.dk/tree/develop.svg?style=svg)](https://circleci.com/gh/eReolen/ereolen.dk/tree/develop)

Scrutinizer, develop branch: [![Scrutinizer Code Quality](https://scrutinizer-ci.com/g/eReolen/ereolen.dk/badges/quality-score.png?b=develop)](https://scrutinizer-ci.com/g/eReolen/ereolen.dk/?branch=develop)

## Setup

- `make dump-ego` and/or `make dump-ereol` depending on your needs
The make file uses a `dce` command to run commands through docker. More info here: https://github.com/xendk/dce
- If your ssh key is not available from the container, you can run the `make dump-ego/dump-ereol` command with your local drush, like so:
`command drush @prod sql-dump --structure-tables-list=watchdog,cache,cache_menu | sed '/Warning: Using a password on the command line interface can be insecure/d' | gzip >private/docker/db-init/ereol/100-database.sql.gz`
- `docker-compose up`
