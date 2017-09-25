module.exports = function(grunt) {
  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),

    compass:{
      dist:{
        options:{
          sassDir: 'scss',
          cssDir: 'css',
          environment: 'development',
          outputStyle: 'compressed'
        }
      }
    },
    watch: {
      files: ['scss/*.scss'],
      tasks: ['compass']
    }
  });
  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.registerTask('default',['compass','watch']);
}