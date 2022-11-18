// Object: ClientVegetationTreeEntity
// ClassId: 8052
// RuntimeId: 20290
// TypeInfo: 0x0000000144EB4640
#include "../Vegetation/VegetationTreeEntity.h"

namespace Vegetation {
    class ClientVegetationTreeEntity : public Vegetation::VegetationTreeEntity {
        char pad_0xB0[0x120];
    }; // 0x1D0
    static_assert(sizeof(ClientVegetationTreeEntity) == 0x1D0);
}