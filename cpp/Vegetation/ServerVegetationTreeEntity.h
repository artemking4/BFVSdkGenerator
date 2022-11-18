// Object: ServerVegetationTreeEntity
// ClassId: 8053
// RuntimeId: 50947
// TypeInfo: 0x0000000144EB4960
#include "../Vegetation/VegetationTreeEntity.h"

namespace Vegetation {
    class ServerVegetationTreeEntity : public Vegetation::VegetationTreeEntity {
        char pad_0xB0[0x120];
    }; // 0x1D0
    static_assert(sizeof(ServerVegetationTreeEntity) == 0x1D0);
}