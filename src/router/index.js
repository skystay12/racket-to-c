import React from 'react';
import { BrowserRouter, Switch, Route } from 'react-router-dom';
import Home from '../pages/Home/Home';
import Compiller from '../pages/codes/codeCompiler';
import Practices from '../pages/practica/practicas';
import NotFound from '../pages/NotFound/NotFound';
import Start from '../pages/Start/Start';

function Router() {
  return (
    <BrowserRouter>
      <Switch>
        <Route exact path="/" component={Home} />
        <Route path="/menu" component={Home} />
        <Route path="/compiller" component={Compiller} />
        <Route path="/practice" component={Practices} />
        <Route path="/start" component={Start} />
        <Route component={NotFound} />
      </Switch>
    </BrowserRouter>
  );
}

export default Router;
