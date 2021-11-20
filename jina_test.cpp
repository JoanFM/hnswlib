#include "hnswlib/jina.pb.h"
#include "hnswlib/hnswalg.h"
#include <iostream>


int main(void) {

    jina::DocumentProto document = jina::DocumentProto();
    std::string text = "hey here";
    document.set_text(text);
    hnswlib::DocumentArrayStore store = hnswlib::DocumentArrayStore();
    store.addDocument(0, document);
    jina::DocumentProto doc = store.getDocument(0);
    std::string text2 = "hey here-2";
    doc.set_text(text2);
    jina::DocumentProto doc2 = store.getDocument(0);
    return 0;
};
