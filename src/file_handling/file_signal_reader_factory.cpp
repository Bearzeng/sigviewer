// Copyright 2013 Clemens Brunner, Thomas Brunner, Christoph Eibel,
// Alois Schlögl, Oliver Terbu.

// This file is part of SigViewer.
//
// SigViewer is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// SigViewer is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with SigViewer. If not, see <http://www.gnu.org/licenses/>.


#include "file_signal_reader_factory.h"

namespace sigviewer
{

//-------------------------------------------------------------------------
FileSignalReaderFactory* FileSignalReaderFactory::getInstance ()
{
    static std::auto_ptr<FileSignalReaderFactory> instance;
    if (!instance.get())
        instance.reset(new FileSignalReaderFactory);
    return instance.get();
}

} // namespace SigViewer_
