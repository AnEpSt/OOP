#includde "jsonreader.h"
#include  <fstream>

JsonReader::JsonReader(const std::string& filename){
  fin.open(filename);
}
bool JsonReader::is_open() const{
  return bool.is_open();
}
std::vector<remix> JsonRader::ReadALL(){
  std::vector<remix> rem;
  while (!fin.eof()){
      json j;
      fin >> j;
      for (const auto& e: j) {
        remix c;
        e["name"].get_to(c.name);
        e["author"].get_to(c.author);
        e["year"].get_to(c.year);
        e["prosl"].get_to(c.prosl);
        e["genre"].get_to(c.genre);
        e["feat"].get_to(c.feat);
        }
      rem.push_back(c);
  }
}
