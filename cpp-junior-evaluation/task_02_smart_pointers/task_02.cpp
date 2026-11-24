#include "task_02.hpp"
#include <utility>

PacketBuffer::PacketBuffer(size_t size) : size_(size) {
    // TODO: Zaalokuj bufor
}

size_t PacketBuffer::size() const {
    return size_;
}

uint8_t* PacketBuffer::release_buffer() {
    // TODO: Przekaż własność bufora i zaktualizuj size_
    return nullptr;
}

bool NodeB::has_valid_prev() const {
    // TODO: Sprawdź czy wskaźnik prev wskazuje na istniejący obiekt
    return false;
}
