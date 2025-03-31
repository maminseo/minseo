constfs = require('fs');
// 비동기적으로파일읽기

fs.readFile('example.txt', 'utf8', (err, data) => {
  if(err) {
    console.error(err);
    return;
  }
  console.log('파일내용:', data);
});

console.log('파일을읽는중...');