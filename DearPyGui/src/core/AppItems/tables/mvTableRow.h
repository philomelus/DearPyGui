#pragma once

#include "mvAppItem.h"
#include "mvItemRegistry.h"
#include <stdint.h>

namespace Marvel {

    class mvTableRow : public mvAppItem
    {

    public:

        static void InsertParser(std::map<std::string, mvPythonParser>* parsers);


        MV_APPLY_WIDGET_REGISTRATION(mvAppItemType::mvTableRow, add_table_row)
        MV_DEFAULT_CHILDREN

    public:

        explicit mvTableRow(mvUUID uuid);

        void draw(ImDrawList* drawlist, float x, float y) override {}

    private:

        int _id = 0;
    };

}
