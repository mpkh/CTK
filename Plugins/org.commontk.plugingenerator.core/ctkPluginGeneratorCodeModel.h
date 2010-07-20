/*=============================================================================

  Library: CTK

  Copyright (c) 2010 German Cancer Research Center,
    Division of Medical and Biological Informatics

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=============================================================================*/


#ifndef CTKPLUGINGENERATORCODEMODEL_H
#define CTKPLUGINGENERATORCODEMODEL_H

#include <QObject>
#include <QScopedPointer>

#include "ctkPluginGeneratorAbstractTemplate.h"

class ctkPluginGeneratorCodeModelPrivate;

class ctkPluginGeneratorCodeModel : public QObject
{

  Q_OBJECT

public:
    ctkPluginGeneratorCodeModel();

    virtual ~ctkPluginGeneratorCodeModel();

    void addTemplate(ctkPluginGeneratorAbstractTemplate* templ, const QString& path = "");

    ctkPluginGeneratorAbstractTemplate* getTemplate(const QString& path) const;

    void create(const QString& location);

private:

    Q_DECLARE_PRIVATE(ctkPluginGeneratorCodeModel)

    const QScopedPointer<ctkPluginGeneratorCodeModelPrivate> d_ptr;


};

#endif // CTKPLUGINGENERATORCODEMODEL_H
